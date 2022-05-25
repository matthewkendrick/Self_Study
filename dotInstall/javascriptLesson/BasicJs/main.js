'use strict'

// constで宣言された値は再代入できません
// しかし基本的には再代入できない方が望ましいのでconstが使われやすいです
let price = 150;
price = 100
console.log(price * 100)