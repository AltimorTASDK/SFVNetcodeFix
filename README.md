## Instructions
Extract the zip to "Steam/steamapps/common/Street Fighter V".

## Why is this needed?
SFV has a bug where one player's game can lag behind the other's online.
This can cause artificial lag and one sided rollback for the other player.

When the players' "clocks" are synced, if there is e.g. a 4 frame packet round
trip time between them, each player should be 2 frames ahead of the time of the
last received input from their opponent, and experience 2 frame rollbacks.

If one player lags behind, the other player will receive inputs from farther "in
the past" (up to 15 frames!) than they should, causing unnecessarily big
rollbacks and artificial lag, while the player that's behind may even be
receiving inputs that appear to be "in the future" to their game and never
experience rollbacks at all.

This fix ensures your "clock" never gets more than half of your packet round trip
time ahead of your opponent's so that you never experience more rollback than
them.

## Does the other player need to have this fix as well?
No, but if they don't have the fix, it's still possible for them to experience
one sided rollback.

## Fix your shit Capclown
This took a bit over 2 days to make, while Capcom hasn't patched the bug for
4 years. Most of that was reverse engineering. It would take more like 30 minutes
with the source code. MikeZ even made a tweet pinpointing the cause of the bug
during the beta.
