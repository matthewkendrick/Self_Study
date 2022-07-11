'use strict';

{
  function callback() {
    
  }
  const observer = new IntersectionObserver(callback, {
    threshold: 0.2,
  });

  document.querySelectorAll('.animate').forEach(el => {
    observer.observe(el);
  });
}