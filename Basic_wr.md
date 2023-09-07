# Basic

Introduction: Basic usage of VS Code; commonly used extensions; C/C++ environment setup.

**Claim: We're not professional VS Code users (no deep research on it), and this workshop would only contain basic usage of VS Code.** Advanced VS Code usage could be learned by reading the official documents.

## Installation

You can download from the [official website](https://code.visualstudio.com/).

If you are not using the latest version of VS Code, please upgrade it to the latest version!

## Intro

### What is VS Code?

~~Web browser~~ (VS Code was originally written with a *mix of JavaScript and TypeScript*)

Free, cross-platform editor

“Evolved”,modern editor

Features:

- Intellisense
- LSP
- Medium size
- Extension market
- Vim
- …

### [What is the difference between Visual Studio Code and Visual Studio IDE?](https://code.visualstudio.com/docs/supporting/FAQ#_what-is-the-difference-between-visual-studio-code-and-visual-studio-ide)

Visual Studio Code is a streamlined code editor with support for development operations like debugging, task running, and version control. It aims to provide just the tools a developer needs for a quick code-build-debug cycle and leaves more complex workflows to fuller featured IDEs, such as [Visual Studio IDE](https://visualstudio.microsoft.com/).

### Why VS Code?

- Rich language support: support hundreds of languages
- Medium size
- Medium fast
- Highly customizable
- Active extension market
- Good looking
- Native support for HTML/JS/TS
- Powerful native tools

## Themes and Icons

### Common themes:

- One Dark Pro
- Monokai

Find more on https://vscodethemes.com/

### Icons

+ [vscode-icons](https://github.com/vscode-icons/vscode-icons)
+ [Material Theme Icons](https://github.com/material-theme/vsc-material-theme-icons)
+ (macOS user) [vscode-icons-mac](https://github.com/wayou/vscode-icons)

## [JOJ Tools](https://github.com/linsyking/vscode-joj-tools)

Extension: JOJ Tools

*python and pip should be installed.*

*Please first make sure your `joj-submittor` and `ji-auth` is the latest version.*

### Not working?

1. Make sure `pip3` is approachable in your shell

2. ```
   pip3 uninstall ji-auth joj-submitter
   ```

   Reload VS Code window.

3. Others: commit an issue on [Github repo](https://github.com/linsyking/vscode-joj-tools)!

## Key Binding

Find original key bindings: `Ctrl + K`  `Ctrl + S`

(If you are using macOS, you may use `cmd+K` `cmd+S` instead.)

Then you can search and change key bindings here.

### Some commonly used:

#### Split windows

Horizontal: `Ctrl+\`

Vertical: `Ctrl+(K+\)`

#### Terminal

Open terminal: `Ctrl+~`









