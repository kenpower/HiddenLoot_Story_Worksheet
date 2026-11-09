# Getting the lecturer's tests (only when Ken says so)

Follow the checklist for the tool you use. Run the `git` commands from the repo's folder. Only look
at the results for your two stories, and copy them onto your Story Log.

## Visual Studio

- [ ] Open a terminal with **View > Terminal**.
- [ ] Save your work, then commit and push it:
  ```bash
  git add src/stories.cpp
  git commit -m "Finished our stories"
  git push
  ```
- [ ] Get the tests:
  ```bash
  git fetch https://github.com/kenpower/hidden-loot-po-tests.git main
  git checkout FETCH_HEAD -- po_tests
  ```
- [ ] Check there is now a `po_tests` folder next to `CMakeLists.txt`.
- [ ] Choose **Project > Delete Cache and Reconfigure**, and wait for the Output window to say CMake generation has finished.
- [ ] Choose **Build > Build All**.
- [ ] In the **Select Startup Item** dropdown, choose **po_tests.exe**, or open **Test > Test Explorer**.
- [ ] Press **Ctrl+F5**, or click **Run All** in Test Explorer.
- [ ] To use the menu again, switch the dropdown back to **hidden_loot.exe**.

## CLion

- [ ] Open a terminal with **View > Tool Windows > Terminal**.
- [ ] Save your work, then commit and push it:
  ```bash
  git add src/stories.cpp
  git commit -m "Finished our stories"
  git push
  ```
- [ ] Get the tests:
  ```bash
  git fetch https://github.com/kenpower/hidden-loot-po-tests.git main
  git checkout FETCH_HEAD -- po_tests
  ```
- [ ] Check there is now a `po_tests` folder next to `CMakeLists.txt`.
- [ ] Choose **Tools > CMake > Reset Cache and Reload Project**, and wait for it to finish.
- [ ] In the run configuration dropdown at the top right, choose **po_tests**.
- [ ] Press **Shift+F10**.
- [ ] To use the menu again, switch the dropdown back to **hidden_loot**.

## VS Code

- [ ] Open a terminal with **Terminal > New Terminal**.
- [ ] Save your work, then commit and push it:
  ```bash
  git add src/stories.cpp
  git commit -m "Finished our stories"
  git push
  ```
- [ ] Get the tests:
  ```bash
  git fetch https://github.com/kenpower/hidden-loot-po-tests.git main
  git checkout FETCH_HEAD -- po_tests
  ```
- [ ] Check there is now a `po_tests` folder next to `CMakeLists.txt`.
- [ ] In the Command Palette (**Ctrl+Shift+P**), run **CMake: Delete Cache and Reconfigure**.
- [ ] In the Command Palette, run **CMake: Build**.
- [ ] In the Command Palette, run **CMake: Set Launch/Debug Target** and choose **po_tests**.
- [ ] Press **Shift+F5**, or use the **Testing** panel in the sidebar.
- [ ] To use the menu again, set the target back to **hidden_loot**.

## Command line

- [ ] Save your work, then commit and push it:
  ```bash
  git add src/stories.cpp
  git commit -m "Finished our stories"
  git push
  ```
- [ ] Get the tests:
  ```bash
  git fetch https://github.com/kenpower/hidden-loot-po-tests.git main
  git checkout FETCH_HEAD -- po_tests
  ```
- [ ] Check there is now a `po_tests` folder next to `CMakeLists.txt`.
- [ ] Configure and build:
  ```bash
  cmake -S . -B build
  cmake --build build
  ```
- [ ] Run the tests, using your two story numbers:
  ```bash
  ./build/po_tests --gtest_filter=Story1.*:Story5.*
  ```
  On Windows with Visual Studio's compiler, the program is `build\Debug\po_tests.exe`.
