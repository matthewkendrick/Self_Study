(function() {
  'use strict';

  var vm = new Vue({
    el: '#app',
    data: {
      newItem: '',
      todos: [
        'task 1',
        'task 2',
        'task 3',
      ]
    },
    methods: {
      addItem: function(e) {
        this.todos.push(this.newItem);
        this.newItem = '';
      },
      deleteItem: function(index) {
        if (confirm('Are you sure?')) {
          this.todos.splice(index, 1);
        }
      }
    }
  });
})();