'use strict'

{
  const target = document.querySelector('img');

  function callback(entries) {
    console.log(entries[0]);
  }

  const options = {
    threshold: 0.2,
  };

  const observer = new IntersectionObserver(callback, options);

  observer.observe(target);
}