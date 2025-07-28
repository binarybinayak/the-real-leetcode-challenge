function isPalindrome(x) {
  let n = x;
  let revX = 0;
  while (n > 0) {
    revX = revX * 10 + (n % 10);
    n = Math.floor(n / 10);
  }

  return revX === x;
}

console.log(isPalindrome(121));
