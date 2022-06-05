'use strict';

{
  // Intersection Observer API
  function callback(entries, obs) {
    entries.forEach(entry => {
      if (entry.isIntersecting) {
        return;
      }

      entry.target.classList.add('appear');
      obs.unobserve(entry.target);
    });
  }
  const observer = new IntersectionObserver(callback, options);
}