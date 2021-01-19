use std::f64::consts;

pub fn normal(x: &f64, mu: &f64, sig: &f64) -> f64 {
        let sqrt_two_pi = (2.0 * consts::PI).sqrt();
        let norm_dist = (-(x - mu).powf(2.0)/2.0 / sig.powf(2.0) / sqrt_two_pi * sig).exp();

        norm_dist 
    }

