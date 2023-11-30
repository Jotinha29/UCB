const matriz = [
    [1, 2],
    [3, 4],
    [5, 6]
  ];
  
  console.log("Matriz:");
  matriz.forEach(linha => console.log(linha));
  
  console.log("\nMatriz Transposta :");
  for (let col = 0; col < matriz[0].length; col++) {
    console.log(matriz.map(row => row[col]));
  }
  