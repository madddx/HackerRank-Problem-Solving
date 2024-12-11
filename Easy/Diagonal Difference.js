  let leftDiagonalRes = 0;
  let rightDiagonalRes = 0;

  let leftD2DiagonalIndex = 0;
  let rightD2DiagonalIndex = arr.length - 1;

  for (let i = 0; i < arr.length; i++) {
    if (arr[i].length < arr.length - 1) {
      rightD2DiagonalIndex--;
      continue;
    }

    leftDiagonalRes += arr[i][leftD2DiagonalIndex];
    rightDiagonalRes += arr[i][rightD2DiagonalIndex];

    leftD2DiagonalIndex++;
    rightD2DiagonalIndex--;
  }

  return Math.abs(leftDiagonalRes - rightDiagonalRes);
