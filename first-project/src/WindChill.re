let windChill = (~temperature: int, ~velocity: int) => {
  let t = float_of_int(temperature);
  let v = float_of_int(velocity);
  13.12 +. 0.6215 *. t -. 11.37 *. v ** 0.16 +. 0.3965 *. t *. v ** 0.16;
};

let temperature = 5;
let velocity = 20;
let wc = windChill(~temperature, ~velocity);

Js.log(
  {j|At temperature $temperature degrees C and wind speed $velocity km/hr,
the wind chill temperature is $wc.|j},
);
