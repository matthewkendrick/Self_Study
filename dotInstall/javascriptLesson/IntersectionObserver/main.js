'use strict'

{
  const targets = document.querySelectorAll('img');

  function callback(entries, obs) {
    console.log(entries);

    entries.forEach(entry => {
        if (!entry.isIntersecting) {
          return;
        }

        entry.target.classList.add('appear');
        obs.unobserve(entries[0].target);
      });
    }

  const options = {
    threshold: 0.2,
  };

  const observer = new IntersectionObserver(callback, options);

  targets.forEach(target => {
    observer.observe(target);
  });
}