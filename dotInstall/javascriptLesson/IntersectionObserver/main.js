'use strict'

{
  const target = document.querySelector('img');

  function callback() {
    console.log('fired!');
  }

  const options = {
    threshold: [0.2, 0.8],
  };

  const observer = new IntersectionObserver(callback, options);

  observer.observe(target);
}