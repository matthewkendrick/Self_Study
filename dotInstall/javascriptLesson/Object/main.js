'use strict'

{
  class Post {
    constructor(text) {
      this.text = text;
      this.likeCount = 0;
    }
    show() {
      console.log(`${this.text} - ${this.likeCount}likes`);
    }
    like() {
      this.likeCount++;
      this.show();
    }
  }

  class SponsoredPost {
    constructor(text, sponsor) {
      this.text = text;
      this.likeCount = 0;
      this.sponsor = sponsor;
    }
    show() {
      console.log(`${this.text} - ${this.likeCount} likes`);
      console.log(`...sponsored by ${this.sponsor}`);
    }
    like() {
      this.likeCount++;
      this.show();
    }
  }

  const posts = [
    new Post('JavaScriptの勉強中...'),
    new Post('プログラミング楽しい！'),
    new SponsoredPost('3分動画でマスターしよう', 'dotinstall'),
  ];

  posts[2].show();
  posts[2].like();
  posts[2].like();
}