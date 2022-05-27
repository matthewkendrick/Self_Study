'use strict'

{
  const otherProps = {
    r: 4,
    color: 'red',
  };

  const point = {
    x: 100,
    y: 180,
    ...otherProps,
  };

  // console.log(point);

  const {x, r, ...others} = point;
  console.log(x);
  console.log(r);
  console.log(others);
}