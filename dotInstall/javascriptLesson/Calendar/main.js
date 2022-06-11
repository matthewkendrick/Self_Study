'use strict';

console.clear();

{
  const year = 2020;
  const month = 4; //0から数えるので5月　=　4
  
  function getCalendarBody() {
    const dates = [];
    const lastDate = new Date(year, month + 1, 0).getDate();

    for (let i = 0; i <= lastDate; i++) {
      dates.push({
        date: i,
        isToday: false,
        isDisable: false,
      });
    }

    console.log(dates);
  }

  getCalendarBody();
}