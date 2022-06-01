'use strict'

{
  const target = document.querySelector('img');

  function callback() {
    console.log('fired!');
  }

  const observer = new IntersectionObserver(callback);

  observer.observe(target);
}