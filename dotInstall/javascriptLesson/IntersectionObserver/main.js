'use strict'

{
  const target = document.querySelector('img');

  function callback(entries, obs) {
    console.log(entries[0]);

    if (!entries[0].isIntersecting) {
      return;
    }

    entries[0].target.classList.add('appear')
    obs.unobserve(entries[0].target);

  }

  const options = {
    threshold: 0.2,
  };

  const observer = new IntersectionObserver(callback, options);

  observer.observe(target);
}