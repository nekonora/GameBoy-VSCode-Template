# GameBoy VSCode Template for macOS
A VSCode project template to kickstart a new GameBoy ROM development in C with optional debugging in Emulicious on macOS.

## Requirments
- VSCode extension [Project Templates](https://marketplace.visualstudio.com/items?itemName=cantonios.project-templates) installed
- [GBDK-2020](https://github.com/gbdk-2020/gbdk-2020) tools installed in `/opt/gbdk`
- (optional) [Emulicious](https://emulicious.net/downloads/) installed in `/Applications/Emulicious` (and [Emulicious Debugger VSCode extension](https://marketplace.visualstudio.com/items?itemName=emulicious.emulicious-debugger))

## Usage
1. Download the latest zipped release
2. Unzip it in `$HOME/Library/Application Support/Code/User/ProjectTemplates`
3. Open the folder you want to create a new project in VSCode and from the command palette choose `Project: Create Project from Template` > `GameBoy-VSCode-Template
`
4. Write a name for the project and press enter
5. If everything went right and your setup is good you should be able to press F5 and see an example game launching in Emulicious and attached to the debugger. If you don't have Emulicious set up or you don't want to debug, you can just CMD+Shift+B and have a `.gb` ROM compiled in the `game` folder.

## Relevant links
- [GBDK-2020 documentation](https://gbdk-2020.github.io/gbdk-2020/docs/api)
- [Developing in gbdk on macOS](https://gist.github.com/keztricks/863349fd597f8e43f42976a1ca19e263): gist from @keztricks
- [AngelSix's video series](https://youtu.be/eYT9s9bvKYU) on GameBoy development
- [SameBoy](https://github.com/LIJI32/SameBoy): a developer-friendly macOS-native GB emulator, nicer but simpler alternative to Emulicious
