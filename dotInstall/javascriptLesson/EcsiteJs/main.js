'use strict'

{
  function play() {
    setTimeout(() => {
      images[currentIndex].classList.remove('current');
      currentIndex++;
      images[currentIndex].classList.add('current')
      play();
    }, 1000);
  }
  const images = document.querySelectorAll('.hero img');
  let currentIndex = 0;

  play();
}