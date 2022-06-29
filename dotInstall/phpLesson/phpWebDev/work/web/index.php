<?php

  require('../app/functions.php');
  include('../app/_parts/_header.php');

  $color = 'transparent';
  $today = date('Y-m-d H:i:s l');

?>

  <section>
    <div class="text">
      <p><?= $today ?></p><br>
    </div>
    <div class="input-field">
      <form action="result.php" method="get">
        <div class="info-field">
          <label for="username">User Name</label>
          <div>
            <input type="text" name="username" id="">
          </div>
          <div class="radio-group">
            <label for=""><input type="radio" name="sex" value="man">Man</label>
            <label for=""><input type="radio" name="sex" value="women">Women</label>
            <label for=""><input type="radio" name="sex" value="other">Other</label>
          </div>
        </div>
        <div class="info-field color">
          <label for="select">Color Pick</label>
          <div>
            <select name="color" id="">
              <option value="Not selected">Not selected</option>
              <option value="blue">Blue</option>
              <option value="green">Green</option>
              <option value="gold">Orange</option>
            </select>
          </div>
        </div>
        <div class="info-field">
          <label for="message">Message</label>
          <div>
            <textarea name="message" id="" rows="10"></textarea>
          </div>
        </div>
        <!-- <div class="info-field">
          <label for="message">Message</label>
          <div>
            <input type="text" name="message" id="">
          </div>
        </div> -->
        <button>Send</button>
      </form>
    </div>
  </section>


<?php 

include('../app/_parts/_footer.php');