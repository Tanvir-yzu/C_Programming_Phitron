#include <stdio.h>

int main() {
    long long n, m, k;
    scanf("%lld %lld %lld", &n, &m, &k);

    long long max_katryoshkas = 0;
    // First, try to make Katryoshkas with two eyes, one mouth, and one body.
    long long type1 = (n / 2 < m) ? (n / 2) : m; // Minimum of pairs of eyes and mouths
    type1 = (type1 < k) ? type1 : k; // Minimum of the previous result and bodies
    max_katryoshkas += type1;
    n -= type1 * 2;
    m -= type1;
    k -= type1;

    // Then, if mouths are left, try to make Katryoshkas with one eye, one mouth, and one body.
    // This step is only possible if there are mouths left after making the first type.
    if (m > 0) {
        long long type2 = (n < m) ? n : m; // Minimum of eyes and mouths
        type2 = (type2 < k) ? type2 : k; // Minimum of the previous result and bodies
        max_katryoshkas += type2;
        n -= type2;
        m -= type2;
        k -= type2;
    }

    // Finally, use any remaining parts to make the simplest Katryoshka (two eyes and one body),
    // only if there are no mouths left or this type was not made in the previous step.
    long long type3 = n / 2; // Pairs of eyes
    type3 = (type3 < k) ? type3 : k; // Minimum of the previous result and bodies
    max_katryoshkas += type3;

    printf("%lld\n", max_katryoshkas);

    return 0;
}