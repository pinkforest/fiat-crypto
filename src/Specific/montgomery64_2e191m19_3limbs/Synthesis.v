Require Import Crypto.Specific.Framework.SynthesisFramework. Export SynthesisFramework.Exports.
Require Import Crypto.Specific.montgomery64_2e191m19_3limbs.CurveParameters.

Module P <: PrePackage.
  Definition package : Tag.Context.
  Proof. make_Synthesis_package curve extra_prove_mul_eq extra_prove_square_eq. Defined.
End P.

Module Export S := PackageSynthesis P.
