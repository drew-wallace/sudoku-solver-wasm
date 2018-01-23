window.onclick = function (ev) {
    var grid = new Module.inputGrid();
    for (var r = 0; r < 9; r++) {
        var column = new Module.inputGridColumn();
        for (var c = 0; c < 9; c++) {
            column.push_back(0);
        }
        grid.push_back(column);
    }
    var puzzle = new Module.SudokuPuzzle(grid);
    puzzle.solve();
    puzzle.output(true);
    puzzle.delete();
    grid.delete();
}