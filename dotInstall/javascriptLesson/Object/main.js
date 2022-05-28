'use strict'

{
  // let x = 1;
  // let y = x;
  // x = 5;
  // console.log(x);
  // console.log(y);

  // 配列やオブジェクトの挙動
  // 単純なデータ型と違って、データ量が大きくなる可能性があるのでデータを丸ごとコピーしてくるということはしません。
  // すなわち、割り当てられた値そのものではなく、値がどこに格納されているかという情報だけがつくられて(x)、そこに名前（y）が付けられるという仕組み(参照しているだけ)

  // let x = [ 1, 2 ];
  // let y = x;
  // x[0] = 5;
  // console.log(x);
  // console.log(y);

  let x = [ 1, 2 ];
  let y = [ ...x ];
  x[0] = 5;
  console.log(x);
  console.log(y);
}