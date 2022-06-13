'use strict';

{
  const timer = document.getElementById('timer');
  const start = document.getElementById('start');
  const stop = document.getElementById('stop');
  const reset = document.getElementById('reset');

  let startTime;

  function countUp() {
    console.log(Date.now() - startTime);

    setTimeout(() => {
      countUp();
    }, 10);
  }

  start.addEventListener('click', () => {
    startTime = Date.now();
    countUp();
  });
}