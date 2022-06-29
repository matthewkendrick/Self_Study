<?php

  require('../app/functions.php');
  include('../app/_parts/_header.php');

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