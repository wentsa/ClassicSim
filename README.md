# Introduction 

This is an event-driven gameplay simulator for World of Warcraft Classic written in C++. It is called "ClassicSim", or
CSIM for short. Its purpose is to provide feedback for a user regarding the value of equipment, talents, consumables,
rotation choices, etc.

For information regarding new features / bug fixes in upcoming release, check [Next release].

# Licensing

Licensing information can be found in LICENSE.md.

# Features of this tool

These are some of the features of this tool:

* Talent calculator (try shift-left/right click talents)
* World buffs and consumables
* Enchants
* Rulesets (Standard, Vaelastrasz, Loatheb)
* Equipment sheet (with full stat filter support)
* Data-driven rotations
* Statistics

# Getting a built release

Releases are available at [http://classicsim.org].

# Known issues

* Item lists are incomplete (these are manually added for now)
* Some MC items have the wrong patch availability (a number of items in MC were added after 1.0)
* Tooltip for Protection talent Improved Shield Block is incorrect
* Rotations need to define a variable to be parsed correctly
* Fiery Weapon rolls on melee hit table rather than spell table

# Next release

Upcoming features and bug fixes that are merged but not yet built and made available as a release:

* Use trinkets supported in rotation (Diamond Flask, Zandalarian Hero Medallion, Earthstrike, Badge of the Swarmguard,
Slayer's Crest, Jom Gabbar, Kiss of the Spider).

# Release notes

Release notes for each release.

## v0.1-alpha-2 (not yet released)

### New features

* Use-trinkets now available to be equipped and used in rotations.

### Restrictions

No new restrictions, delivered features or bug fixes are expected to be complete.

## v0.1-alpha-1 (released 2018-10-27):

Initial release:

* Warrior advanced support (missing Protection and Rend)
* Supporting systems (talent calculator, equipment selection, world buffs / consumables, data*driven rotations)
* Quick sim with statistics

### Restrictions

* No full sim
* Some missing statistics (stat weight calculations, rotation, dps distribution)
* Character level locked to 60
* Spell ranks locked
* Only warrior available
* Items lists incomplete
* Rotations must be viewed in the actual .xml files instead of within the application
* and more..

# Future work

The timeframe for any of these are not set in stone.

## Near, near future

This is defined as "likely to be in the next release". Releases are currently expected to be produced about every 2
weeks, or whenever an exciting new feature is available.

* Use-trinkets supported (DONE)
* Full stat weight calculations w/ confidence intervals
* DPS distribution w/ standard deviation

## Near future:

This is defined as "won't be in the next release, but probably in the release after". Estimated time is around 4+ weeks.

* Rotation possible to view and edit directly in the tool
* More melee classes support
* Removing character level 60 restriction

## Long-term future (2 months+)

* Caster classes
* TPS
* Tanking
* Healing

# Anticipated questions and answers

Q: Why do this..?

A: For me it is an ode to vanilla.

Q: Only a single class? WTF!

A: The intent of the current release is to show all the supporting systems that are shared between classes (talent
calculator, world buffs, etc). The base for all classes are created, expanding the classes is mechanically
time-consuming but in most cases not particularly difficult with a framework in place (although some refactoring will
be required in a few places).

Q: Only Windows support? And 32-bit?

A: I plan to make a Linux release available, it is all a matter of priority. Compiling 64-bit is not supported by Qt
Creator on Windows out of the box (at least not in the open-source version). If you know more about this feel free to
contact me!

Q: (not really a question) Nothing happens when I click "Click me!"

A: Make sure you have equipped a mainhand weapon.

Q: How many iterations are being run?

A: In the current release only the Quick Sim option is available. By default it runs 1000 iterations, although this
value can be modified under Settings.

Q: How is this or that mechanic implemented?

A: A lot of scouring the forums. Since we have yet no way of knowing before the demo how some mechanics work, the main
focus have been to make sure the mechanics are easily updated. Check Mechanics/ in the repository link for at least how
some of the mechanics work if you are really interested.

Q (not really a question): This mechanic is implemented incorrectly!

A: If the mechanic is incorrect because of a bug, then feel free to open an issue or discuss it with me in messages. If
you disagree that is how the mechanic should work because it is either not vanilla-like, or not the way one private
server implemented it then it will probably not get changed until Classic is released and we can find the actual answer.

Q (not really a question): It crashed!

A: Please let me know what you were doing!

# Credits

Thanks to all the theorycrafters over the years that have tirelessly worked towards refining our understanding of the
game. None mentioned, none forgotten.