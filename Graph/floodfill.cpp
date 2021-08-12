const int N = 1000;

int grid[N][N];
int row;
int col;
bool visited[N][N];
int size = 0;

void floodfill(int r, int c, int color)
{
    if (
        (r < 0 || r >= row || c < 0 || c >= col)
        || grid[r][c] != color
        || visited[r][c]
    )
        return;

    visited[r][c] = true;
    size++;


    floodfill(r, c + 1, color);
    floodfill(r, c - 1, color);
    floodfill(r - 1, c, color);
    floodfill(r + 1, c, color);
}

int main()
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (!visited[i][j])
            {
                size = 0;
                floodfill(i, j, grid[i][j]);
            }
        }
    }
}
