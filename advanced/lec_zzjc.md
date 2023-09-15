# VSCode Workshop (Advanced)

Author: Zhaojiacheng Zhou

---

## Code Formatting

Clang-format is a recommended formatter for c/cpp code. You can format the code automatcally when save the file. Here is the [official website](https://clang.llvm.org/docs/ClangFormat.html).

Visit the [web](https://zed0.co.uk/clang-format-configurator/) to configure your own style.

You can install the clang-format by installing clang and use clang-format command to format all code at one time. Remember the official doc and the **manual** are your best friends. You can use `clang-format --help` to get support.

You can use the following command to format all the c/cpp files in the repo:

```bash
clang-format -i **/*.c
#or
clang-format -i **/*.cpp
```

## Python Setup

If you only want to install a python, you can simply follow the guide below:

### Linux

Use your package manager to handle it. I think you can do it yourself.

### Macos

Hopefully you have installed homebrew in your VG101/151. Just run the following command:

```zsh
brew install python
```

### Windows

If you have wsl2, you can directly install python with your package manager like linux. You can also use msys2 to install python, but first plz disable system alias of `python`. Or you can use windows store to install the python.

### Advanced

You can use virtualenv `venv` to manage the python environment. It's recommended to create a virtual environment for each python project.

```powershell
# Windows
python -m venv demo
```

```zsh
#Macos and Linux
python3 -m venv demo
```

Then you need to activate the environment with

```powershell
demo\Scripts\activate
```

```zsh
source demo/bin/activate
```

You can exit the environment with `deactivate`

You can add `#!/usr/bin/env python3` at the head of the python file s.t. you can run the python file with `./file.py` instead of lengthy `python3 file.py`

<!-- TESTING: This section is still pending -->
#### Change Python Version

You can install pyenv to manage the python environment on macos and linux. For windows users, possibly you have to set up the wsl2 first or you can see the [pyenv-win](https://github.com/pyenv-win/pyenv-win)

```zsh
brew install pyenv
```

```bash
curl https://pyenv.run | bash
```

Then you can use `pyenv` to manage the python version.

## Jupyter Notebook

If you installed python package in vscode, you should have installed it. Just set the intepretor and start to have fun.
