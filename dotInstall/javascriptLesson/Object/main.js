'use strict'

{
  // const point = [100, 180];

  const point = {
    x: 100,
    y: 180,
  };

  point.x = 120;
  // point[`x`] = 120;

  // console.log(point.x);
  // console.log(point[`y`]);

  point.z = 90;
  delete point.y;

  console.log(point);
}