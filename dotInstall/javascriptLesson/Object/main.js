'use strict'

{
  const d = [2019, 11, 14];

  // console.log(d.join('/'));

  const t = '17:08:24';
  // console.log(t.split(':'));
  
  const [hour, minute, second] = t.split(':');
  console.log(hour);
  console.log(minute);
  console.log(second);
}