public static void matrixRotation(List<List<int>> matrix, int r)
{
    var col = matrix.First().Count;
    var row = matrix.Count;
    var layers = Math.Min(col, row) / 2;
    var layerLines = new List<List<int>>();

    // Iterate through layers to get them as a list of numbers.
    for (int layer = 0; layer < layers; layer++)
    {
        var line = new List<int>();

        // get left values of the layer
        for (int i = layer; i < row - 1 - layer; i++)
        {
            line.Add(matrix[i][layer]);
        }

        // get bottom values of the layer
        for (int i = layer; i < col - 1 - layer; i++)
        {
            line.Add(matrix[row - 1 - layer][i]);
        }

        // get right values of the layer
        for (int i = row - 1 - layer; i > layer; i--)
        {
            line.Add(matrix[i][col - 1 - layer]);
        }

        // get top values of the layer
        for (int i = col - 1 - layer; i > layer; i--)
        {
            line.Add(matrix[layer][i]);
        }

        layerLines.Add(line);
    }

    // Iterate through lines and rotate anti-clockwise
    foreach (var line in layerLines)
    {
        // Once rotated by line count result will be the same
        // By using % we can optimize and get the real count.
        var rotations = r % line.Count;

        for (int i = 0; i < rotations; i++)
        {
            var last = line.Last();
            line.RemoveAt(line.Count - 1);
            line.Insert(0, last);
        }
    }

    // Replace the lines in layers.
    for (int layer = 0; layer < layers; layer++)
    {
        var line = layerLines[layer];
        var index = 0;

        // left layer values
        for (int i = layer; i < row - 1 - layer; i++)
        {
            matrix[i][layer] = line[index++];
        }

        // bottom layer values
        for (int i = layer; i < col - 1 - layer; i++)
        {
            matrix[row - 1 - layer][i] = line[index++];
        }

        // right layer values
        for (int i = row - 1 - layer; i > layer; i--)
        {
            matrix[i][col - 1 - layer] = line[index++];
        }

        // top layer values
        for (int i = col - 1 - layer; i > layer; i--)
        {
            matrix[layer][i] = line[index++];
        }

        layerLines.Add(line);
    }

    // Print output
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            Console.Write(matrix[i][j] + " ");
        }
        Console.WriteLine();
    }
}
