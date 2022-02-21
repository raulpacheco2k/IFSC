package Test;

import Model.Diario;
import org.junit.Test;

import static org.junit.Assert.*;

public class DiarioTest {
    Diario diario;

    public DiarioTest() {
    }

    // Partição de equivalência e análise de valor limite nas frequeência <74;>=75
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

    // Partição de equivalência e análise de valor limite das notas <3;>=4;>=6
    @Test
    public void testNotaLimiteSuperiorReprovado() {
        this.diario = new Diario(2843734, 80, 3);
        assertEquals("REPROVADO", diario.situacao());
    }

    @Test
    public void testNotaLimiteSuperiorRecuperação() {
        this.diario = new Diario(2843734, 80, 4);
        assertEquals("RECUPERAÇÃO", diario.situacao());
    }

    @Test
    public void testNotaLimiteInferiorAprovado() {
        this.diario = new Diario(2843734, 80, 6);
        assertEquals("APROVADO", diario.situacao());
    }
}
