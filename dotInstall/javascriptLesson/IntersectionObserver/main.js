'use strict'

{
  const target = document.querySelector('img');

  function callback(entries) {
    console.log(entries[0]);

    if (!entries[0].isIntersecting) {
      return;
    }

    entries[0].target.classList.add('appear')

    // if (entries[0].isIntersecting) {
    //   entries[0].target.classList.add('appear')
    // } else {
    //   entries[0].target.classList.remove('appear')
    // }
  }

  const options = {
    threshold: 0.2,
  };

  const observer = new IntersectionObserver(callback, options);

  observer.observe(target);
}