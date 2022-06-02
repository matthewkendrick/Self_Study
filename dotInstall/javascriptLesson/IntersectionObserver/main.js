'use strict'

{
  const target = document.querySelector('img');

  function callback(entries) {
    console.log(entries[0]);

    if (!entries[0].isIntersecting) {
      return;
    }

    entries[0].target.classList.add('appear')

  }

  const options = {
    threshold: 1,
    rootMargin: '0px 0px -100px',
  };

  const observer = new IntersectionObserver(callback, options);

  observer.observe(target);
}