# VSCode Workshop (Advanced)

Author: Zhaojiacheng Zhou

---

## Code Formatting

Clang-format is a recommended formatter for c/cpp code. Here is the [official website](https://clang.llvm.org/docs/ClangFormat.html). Remember the official doc and the **manual** are your best friends. You can use `clang-format --help` to get support.

You can use the following command to format all the c/cpp files in the repo:

```bash
clang-format -i **/*.c
#or
clang-format -i **/*.cpp
```

<!-- TODO: VSCode releated  -->
You can also format the code automatcally when save the file.

Visit the [web](https://zed0.co.uk/clang-format-configurator/) to configure your own style.

<!-- TODO: git hook -->
You can also get the code formatted when you push the file by setting the git hook.

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

You can also msys2 to install python, but first plz disable system alias of `python`. Or you can use windos store to install the python.

### Advanced

You can use venv to manage the python environment. Use pip to install it and use python -m venv path/to/venv and then use path/to/venv/bin/python and path/to/venv/bin/pip.

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

---

## Jupyter Notebook

If you installed python package in vscode, you should have installed it. Just set the intepretor and start to have fun.
