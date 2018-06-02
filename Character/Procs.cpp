
#include "Procs.h"
#include "Proc.h"
#include "GeneralProcs.h"
#include "Character.h"
#include "Faction.h"

Procs::Procs(Character* pchar, Faction* faction, QObject* parent) :
    QObject(parent),
    pchar(pchar),
    faction(faction),
    general_procs(new GeneralProcs(pchar, faction))
{}

Procs::~Procs()
{
    delete general_procs;
}

void Procs::run_proc_effects(ProcInfo::Source source) {
    for (int i = 0; i < active_procs.size(); ++i) {
        if (active_procs[i]->procs_from_source(source))
            active_procs[i]->perform(0);
    }
}

void Procs::add_proc_effect(Proc* proc) {
    active_procs.append(proc);
}

void Procs::remove_proc_effect(const Proc *proc) {
    for (int i = 0; i < active_procs.size(); ++i) {
        if (active_procs.at(i)->get_name() == proc->get_name()) {
            active_procs.removeAt(i);
            break;
        }
    }
}

void Procs::reset() {
    for (int i = 0; i < active_procs.size(); ++i) {
        active_procs[i]->reset();
    }
}

void Procs::switch_faction() {
    general_procs->switch_faction();
}
