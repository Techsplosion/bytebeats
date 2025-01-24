# bytebeats
A list of bytebeats I made.

# What is a bytebeat?
Simply put, a bytebeat is a piece of code that puts out values, which are then interpreted as 8-bit unsigned PCM, and played as (potential) music. For example, the following code is a bytebeat:
https://github.com/Techsplosion/bytebeats/blob/566303edfdcdccf3ba1389e859090d6838951473/newfrontiers.c#L11-L18
When these lines of code are wrapped up in an `int main() { ... }` in C (along with `stdio.h`) and piped to SoX to 1) play it directly with `-tcoreaudio` (not Linux compatible) or 2) write it into a wav file and play with `aplay`, they produce a melody!
