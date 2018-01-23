#include <emscripten/bind.h>

using namespace emscripten;

class SudokuPuzzle
{
	private:
		int grid[9][9][10];
		bool nextLevel;
		bool zoneCheck(int v, int cr, int cc);
		void zoneSet(int v, int cr, int cc);
		bool rowCheck(int v, int cr);
		void rowSet(int v, int cr);
		bool colCheck(int v, int cc);
		void colSet(int v, int cc);
		bool cellCheck(int v, int r, int c);
		void setPossible();
		void setCellLoop();
		bool isSolved();
		bool isCorrect();
		void findLeastPoss(int &x, int &y, int &n);

	public:
		SudokuPuzzle(std::vector<std::vector<int>> inputGrid);
		bool solve();
		void output(bool pretty);
};

EMSCRIPTEN_BINDINGS(my_class)
{
	register_vector<std::vector<int>>("inputGrid");
	register_vector<int>("inputGridColumn");

	class_<SudokuPuzzle>("SudokuPuzzle")
		.constructor<std::vector<std::vector<int>>>()
		.function("solve", &SudokuPuzzle::solve)
		.function("output", &SudokuPuzzle::output);
};