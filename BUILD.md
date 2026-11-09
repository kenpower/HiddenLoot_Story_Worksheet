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

## VS Code

Install CMake, a C++ compiler, and the **C/C++** and **CMake Tools** extensions.

1. Choose **File > Open Folder** and open this repo's folder.
2. If asked to select a kit, choose your compiler.
3. Open the Command Palette (**Ctrl+Shift+P**), run **CMake: Set Launch/Debug Target** and choose **hidden_loot**.
4. Press **Shift+F5** to build and run, or **Ctrl+F5** to run with the debugger. The menu appears in the terminal.

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

## Getting the teacher's tests (only when your teacher says so)

Run this from the repo's folder, in a terminal where `git` works:

```bash
git fetch https://github.com/kenpower/hidden-loot-po-tests.git main && git checkout FETCH_HEAD -- po_tests
```

In Windows PowerShell, if `&&` gives an error, run the two parts as separate commands. Then build and
run the tests the same way you built the program. Only look at the results for your two stories.

**Visual Studio:** choose **Project > Delete Cache and Reconfigure**, then choose **po_tests.exe** in the
**Select Startup Item** dropdown and press **Ctrl+F5**. Switch back to **hidden_loot.exe** to run the menu.

**CLion:** choose **Tools > CMake > Reload CMake Project**, then choose **po_tests** in the run
configuration dropdown and press **Shift+F10**.

**VS Code:** run **CMake: Delete Cache and Reconfigure** from the Command Palette, then **CMake: Set
Launch/Debug Target** and choose **po_tests**, and press **Shift+F5**. Set the target back to
**hidden_loot** to run the menu.

**Command line:** use your two story numbers in the last line.

```bash
cmake -S . -B build
cmake --build build
./build/po_tests --gtest_filter=Story1.*:Story5.*
```

On Windows with Visual Studio's compiler, the program is `build\Debug\po_tests.exe`.
