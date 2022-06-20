'use strict';

$(() => {
  const $input = $('input');
  $input.focus();

  $('button').keydown(() => {
    $('<li>')
      .text($input.val())
      .appendTo('ul');
    $input
      .val('')
      .focus();
  });

  $('ul').click(e => {
    if (e.target.nodeName !== 'LI' || !confirm('Are you sure?')) {
      return;
    }
    e.target.remove();
  });
});