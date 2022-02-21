package Test;

import Model.Diario;
import org.junit.Test;

import static org.junit.Assert.*;

public class DiarioTest {
    Diario diario;

    public DiarioTest() {
    }

    @Test
    public void testFrequenciaLimiteSuperiorReprovado() {
        this.diario = new Diario(2843734, 74, 10);
        assertEquals("REPROVADO", diario.situacao());
    }

    @Test
    public void testFrequenciaLimiteInferiorAprovado() {
        this.diario = new Diario(2843734, 75, 10);
        assertEquals("APROVADO", diario.situacao());
    }

    @Test
    public void testNotaLimiteSuperiorReprovado() {
        this.diario = new Diario(2843734, 80, 6);
        assertEquals("REPROVADO", diario.situacao());
    }

    @Test
    public void testNotaLimiteInferiorAprovado() {
        this.diario = new Diario(2843734, 80, 7);
        assertEquals("APROVADO", diario.situacao());
    }
}
