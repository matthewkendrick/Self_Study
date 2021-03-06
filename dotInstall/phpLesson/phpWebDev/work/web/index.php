<?php

  require('../app/functions.php');
  include('../app/_parts/_header.php');

  createToken();

  define('FILENAME', '../app/messages.txt');

  if ($_SERVER['REQUEST_METHOD'] === 'POST') {
    validateToken();

    $message = trim(filter_input(INPUT_POST, 'message'));
    $message = $message !== '' ? $message : '...';

    $fp = fopen(FILENAME, 'a');
    fwrite($fp, $message . "\n");
    fclose($fp);
    
    header('Location: http://localhost:8080/result.php');
    exit;
  }

  $messages = file(FILENAME, FILE_IGNORE_NEW_LINES);

  $today = date('Y-m-d H:i:s l');

?>

  <section>
    <div class="text">
      <p><?= $today ?></p><br>
    </div>
    <div class="input-field">
      <form class="form form1" action="result.php" method="get">
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
        <button>Send</button>
        <a href="reset.php" class="reset-btn">reset</a>
      </form>
      <p class="border"></p>

      <ul class="">
        <?php foreach ($messages as $message): ?>
          <li class=""><?= h($message); ?></li>
        <?php endforeach; ?>
      </ul>
      <form class="form form2" action="" method="post">
        <input type="text" name="message">
        <button>Post</button>
        <input type="hidden," name="token," value="<?= $_SESSION['token']; ?>">
      </form>
    </div>
  </section>


<?php 

include('../app/_parts/_footer.php');