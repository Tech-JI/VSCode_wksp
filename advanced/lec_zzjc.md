# VSCode Workship (Advanced)

Author: Zhaojiacheng Zhou

---

## Code Formatting

Clang-format is a recommended formatter for c/cpp code. You can use the following command to format the c/cpp file.

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

## Windows

You can also msys2 to install python, but first plz disable system alias of `python`. Or you can use windos store to install the python.

## Advanced

You can use venv to manage the python environment. You can use pip to install it and use python -m venv path/to/venv and then use path/to/venv/bin/python and path/to/venv/bin/pip.

You can add `#!/usr/bin/env python3` at the head of the python file s.t. you can run the python file with `./file.py` instead of lengthy `python3 file.py`

---

## Jupyter Notebook
