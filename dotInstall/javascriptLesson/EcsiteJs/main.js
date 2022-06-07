'use strict'

{
  const images = document.querySelectorAll('.hero img');
  let currentIndex = 0;

  setTimeout(() => {
    images[currentIndex].classList.remove('current');
    currentIndex++;
    images[currentIndex].classList.add('current')
  }, 1000);
}