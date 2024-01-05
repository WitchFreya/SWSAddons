# Contributing

This file will contain some general guidelines for contributing as well as setup that will be added to over time.

## Setup

You'll need HEMTT in your path. See [the HEMTT Book - Installation](https://brettmayson.github.io/HEMTT/installation.html) for how to do this.

Once it's installed, you can copy the [`tasks.template.json`](.vscode/tasks.template.json) file and rename it to `.vscode/tasks.json` to have some helpful tasks that you can run in the terminal. 

## SQF

1. Keep variables immutable. 
  1. If you must mutate a variable, name it `_mut_<varName>`.

## Naming

1. Folders should be named in snake case, e.g. `loadout_migration`.
2. Folders should always be named in lowercase, due to quirks with Windows.
3. PAA files should be suffixed with their type based on [Texture Map Types](https://community.bistudio.com/wiki/Texture_Map_Types).


