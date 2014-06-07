/**
 * Calculate R G B from Hue
 *
 * @param  float v1
 * @param  float v2
 * @param  float vH
 *
 * @return float
 */
float Hue_2_RGB( float v1, float v2, float vH )             //Function Hue_2_RGB
{
    if ( vH < 0 ) 
        vH += 1;
    if ( vH > 1 ) 
        vH -= 1;
    if ( ( 6 * vH ) < 1 ) 
        return ( v1 + ( v2 - v1 ) * 6 * vH );
    if ( ( 2 * vH ) < 1 ) 
        return ( v2 );
    if ( ( 3 * vH ) < 2 ) 
        return ( v1 + ( v2 - v1 ) * (.66-vH) * 6 );
    return ( v1 );
}
