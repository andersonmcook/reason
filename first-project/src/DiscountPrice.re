let qty = 7;
let price = 14.50;
let discount = qty < 10 ? 0.05 : 0.10;
let total = float_of_int(qty) *. price;
let afterDiscount = total *. (1.0 -. discount);
Js.log("Price before discount: $" ++ Js.Float.toString(total) ++ ".");
Js.log("Price after discount: $" ++ Js.Float.toString(afterDiscount) ++ ".");
// Alternate
Js.log({j|Price before discount: \$$total|j});
Js.log({j|Price after discount: \$$afterDiscount|j});
