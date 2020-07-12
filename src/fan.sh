#!/bin/bash
function fan_on {
  gpio -g write 2 0
}

function fan_off {
  gpio -g write 2 1
}
