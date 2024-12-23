def arm(grid):
    return map(lambda e: "".join(map(lambda p: "O", [*e])), grid)


def explode(grid):
    return [
        *map(
            lambda r: "".join(
                map(
                    lambda c: ("O", ".")[clear(grid, r[0], c[0])],
                    enumerate([*r[1]]),
                )
            ),
            enumerate(grid),
        )
    ]


def clear(g, i, j):
    return (
        g[i][j] == "O"
        or (i > 0 and g[i - 1] and g[i - 1][j] == "O")
        or (i < len(g) - 1 and g[i + 1] and g[i + 1][j] == "O")
        or (j > 0 and g[i][j - 1] == "O")
        or (j < len(g[i]) - 1 and g[i][j + 1] == "O")
    )


def bomberMan(n, grid):
    if n == 1:
        return grid
    return ((explode(explode(grid)), explode(grid))[n % 4 == 3], arm(grid))[n % 2 == 0]
