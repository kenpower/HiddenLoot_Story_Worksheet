# Building and running Hidden Loot

You need a C++17 compiler and CMake 3.14 or newer. Use whichever of these suits you.
The program you want to run is called `hidden_loot`.

## Visual Studio

Install the **Desktop development with C++** workload, which includes CMake.

1. Choose **File > Open > Folder** and open this repo's folder. Don't look for a `.sln` file; there isn't one.
2. Wait for the Output window to say that CMake generation has finished.
3. In the **Select Startup Item** dropdown next to the green arrow, choose **hidden_loot.exe**.
4. Press **Ctrl+F5** to build and run, or **F5** to run with the debugger.

## CLion

1. Choose **File > Open** and open this repo's folder.
2. If the **Open Project Wizard** appears, click **OK** to accept the Debug profile.
3. In the run configuration dropdown at the top right, choose **hidden_loot**.
4. Press **Shift+F10** to build and run, or **Shift+F9** to run with the debugger. The menu appears in the **Run** window; click in it to type.

## Command line

From the repo's folder:

```bash
cmake -S . -B build
cmake --build build
```

Then run the program:

| Platform | Command |
|---|---|
| Linux or macOS | `./build/hidden_loot` |
| Windows with Visual Studio's compiler | `build\Debug\hidden_loot.exe` |

After you change code, run `cmake --build build` again before you re-run the program.
