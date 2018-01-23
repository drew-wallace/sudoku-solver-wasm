# sudoku-solver-wasm

1) Install the emscripten sdk in the same directory as this repo's directory (a.k.a `../`).
0) Then run `emcc --bind SudokuPuzzle.cpp -O3 -s WASM=1 -o SudokuPuzzle.html --shell-file ../emsdk/emscripten/incoming/src/shell_minimal.html`
0) Add the contents of SudokuPuzzleSnippet.js to the bottom of the last open script tag in SudokuPuzzle.html.
0) Click anywhere on the page and see a successfully solved Sudoku Puzzle